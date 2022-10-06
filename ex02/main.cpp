/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:26:32 by ljoffo            #+#    #+#             */
/*   Updated: 2022/09/09 15:25:06 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	try
	{
		Array<char> empty; 

		std::cout << "Show array called with default constructor: { ";
		for (unsigned int i = 0; i < empty.size(); i++)
			std::cout << empty[i] << ", ";
		std::cout << "}" << std::endl;
		
		Array<char> instChar(3);

		// std::cout << "Show array called with size = " << instChar.size() << ": { ";
		// for (unsigned int i = 0; i < instChar.size(); i++)
		// 	std::cout << instChar[i] << ", ";
		// std::cout << "}" << std::endl;

		instChar[0] = 'a';
		instChar[1] = 'b';
		instChar[2] = 'c';
		
		std::cout << "Show char array: { ";
		for (unsigned int i = 0; i < instChar.size(); i++)
			std::cout << instChar[i] << ", ";
		std::cout << "}" << std::endl;
	
		Array<int> inst(4);

		inst[0] = 1;
		inst[1] = 2;
		inst[2] = 3;
		inst[3] = 4;
		
		std::cout << "Show int array: { ";
		for (unsigned int i = 0; i < inst.size(); i++)
			std::cout << inst[i] << ", ";
		std::cout << "}" << std::endl;
	
		Array<int> inst2(inst);
		std::cout << "Show 2nd int array: { ";
		for (unsigned int i = 0; i < inst2.size(); i++)
			std::cout << inst2[i] << ", ";
		std::cout << "}" << std::endl;

		Array<int> inst3;
		inst3 = inst;
		std::cout << "Show 3rd int array: { ";
		for (unsigned int i = 0; i < inst3.size(); i++)
			std::cout << inst3[i] << ", ";
		std::cout << "}" << std::endl;
		
		std::cout << "Change 1st int array: { ";

		inst[0] = 11;
		inst[1] = 22;
		inst[2] = 33;
		inst[3] = 44;
		
		for (unsigned int i = 0; i < inst.size(); i++)
			std::cout << inst[i] << ", ";
		std::cout << "}" << std::endl;

		std::cout << "Show 2nd int array: { ";
		for (unsigned int i = 0; i < inst2.size(); i++)
			std::cout << inst2[i] << ", ";
		std::cout << "}" << std::endl;

		std::cout << "Show 3rd int array: { ";
		for (unsigned int i = 0; i < inst3.size(); i++)
			std::cout << inst3[i] << ", ";
		std::cout << "}" << std::endl;
		
		std::cout << "Change 2nd int array: { ";
		inst2[0] = 111;
		inst2[1] = 222;
		inst2[2] = 333;
		inst2[3] = 444;
		for (unsigned int i = 0; i < inst2.size(); i++)
			std::cout << inst2[i] << ", ";
		std::cout << "}" << std::endl;

		std::cout << "Change 3rd int array: { ";
		inst3[0] = 1111;
		inst3[1] = 2222;
		inst3[2] = 3333;
		inst3[3] = 4444;
		for (unsigned int i = 0; i < inst3.size(); i++)
			std::cout << inst3[i] << ", ";
		std::cout << "}" << std::endl;

		std::cout << "Show 1st int array: { ";
		for (unsigned int i = 0; i < inst.size(); i++)
			std::cout << inst[i] << ", ";
		std::cout << "}" << std::endl;

		Array<Array<int> > cplex(3);
		cplex[0] = inst;
		cplex[1] = inst2;
		cplex[2] = inst3;
		std::cout << "Show complex array: { ";
		for (unsigned int i = 0; i < cplex.size(); i++)
		{
			for (unsigned int j = 0; j < cplex[i].size(); j++)
				std::cout << cplex[i][j] << ", ";
			std::cout << "| ";	
		}
		std::cout << "}" << std::endl;
		
		std::cout << "Show 1st int array index 8: ";
		std::cout << inst[8] << ", ";
	}
	
	catch(std::exception & e)
   	{
       	std::cout << "Exception: out of range!" << std::endl;
   	}
}
