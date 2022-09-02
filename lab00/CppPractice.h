// XJTU Graphics Course Pre-Lab //
#ifndef __CppPractice_h__
#define __CppPractice_h__
#include <vector>		//// for std::vector
#include <iostream>		//// for printing texts on screen
#include "Eigen/Dense"
using namespace std;

namespace CppPractice{
	//// Practice of using a c++ array (6 TODOs)
	void Practice_0()
	{
		std::cout << ">>>>>>>> Cpp practice 0 start <<<<<<<<" << std::endl;

		////TODO 0: declare an int std::vector with the name array (already done for you).
		std::vector<int> array;

		//// TODO 1: Initialize the array with ten elements from 1-10. Print the array elements on screen.
		
		/*Your implementation here*/

		//// TODO 2: Add two new elements 11 and 12 to the end of the array. Print the array elements on screen.

		/*Your implementation here*/

		//// TODO 3: Add an new element -1 between the previous array[5] and array[6]. 
		//// Keep the other element values unchanged (i.e., the current array values should be {1,2,3,4,5,6,-1,7,8,...})
		//// Print the array elements on screen.

		/*Your implementation here*/

		//// TODO 4: Return the current size of the array. Print the array size on screen.

		/*Your implementation here*/

		//// TODO 5: Resize the array to 20 elements with each element array[i]=2*i. Print the array elements on screen.

		/*Your implementation here*/

		//// TODO 6: Clear the array and print the current array size on screen.

		/*Your implementation here*/

		std::cout << ">>>>>>>> Cpp practice 0 end <<<<<<<<" << std::endl;
	}

	//// Practice of using Eigen vectors (5 TODOs)
	void Practice_1()
	{
		std::cout << ">>>>>>>> Eigen practice 1 start <<<<<<<<" << std::endl;
		//Eigen Reference Web(version 3.4): https://eigen.tuxfamily.org/dox/group__DenseMatrixManipulation__chapter.html 

		// TODO 1: init dynamic matrix a1 and 2x2 matrix b1
		// a1 = [1,2;3,4] b1 =[2,3;1,4]
		// use Eigen to calculate and output a1+b1, a1-b1, a1+=b1

		/*Your implementation here*/

		// TODO 2: init vector3d v,w and v = [1,2,3]; w = [1,0,0]
		// use Eigen to calculate and output (-v+w-v)

		/*Your implementation here*/

		// TODO 3: init matrixXf a2 size(2x2) and matrixXf b2 size(3x3)
		// use Eigen to calculate and output column and row of matrix a2
		// copy b2 to a2(a2 = b2)
		// use Eigen to calculate and output column and row of matrix a2

		/*Your implementation here*/

		// TODO 4: init matrixXd a3 size(2x5)
		// resize a3 to size(4x3)
		// use Eigen to calculate and output column and row of matrix a3

		/*Your implementation here*/

		// TODO 5: init random matrix a4 
		// use Eigen to calculate and output transpose, conjugate, adjoint of a4

		/*Your implementation here*/

		std::cout << ">>>>>>>> Eigen practice 1 end <<<<<<<<" << std::endl;
	}


}
#endif