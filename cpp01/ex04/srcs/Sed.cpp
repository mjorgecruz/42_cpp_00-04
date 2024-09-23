/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 10:27:53 by masoares          #+#    #+#             */
/*   Updated: 2024/05/10 11:39:29 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Sed.hpp"

void worker(std::string s1, std::string s2, std::string file)
{
	std::string line;
	std::string line1;
	std::string buf;
	std::string outfilename;
	unsigned long pos;
	std::ifstream filename(file.c_str());
	if (s1 == "" || s2 == "" || file == "")
	{
		std::cout << "File or string invalid"<<std::endl;
		return;
	}
	if (!filename.is_open())
	{
		std::cerr << "Error opening " << file << std::endl;
		return;
	}
	outfilename = file + (std::string)".replace";
	std::ofstream outfile(outfilename.c_str(), std::ios::out);
	if (!outfile.is_open())
	{
		std::cerr << "Error openining/creating " << outfilename << std::endl;
		filename.close();
		return;
	}
	if (filename.is_open() && outfile.is_open())
	{
		while (filename.good())
		{
			buf = filename.get();
			if (!filename.eof())
			{
				line += buf;
			}
		}
		
		try{filename.close();}
		catch(...){
			std::cerr << "Unable to close"<< file <<std::endl;
			return;
		}
		
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			try{
				line1 += line.substr(0, pos);
				line1 = line1 + s2;
				line = line.substr(pos + s1.length(), line.length() - pos - s1.length());
			}
			catch(std::out_of_range&)
			{
				outfile << line << std::endl;
				filename.close();
				outfile.close();
			}
				pos = line.find(s1);
		}
		line1 = line1 + line;
		outfile << line1;
		try{outfile.close();}
		catch(...){
			std::cerr << "Unable to close"<< outfilename <<std::endl;
			return;
		}
	}
	else 
		std::cerr << "Unable to open file or create output file"<<std::endl; 
}