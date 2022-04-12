//
// Created by Gaynell Hanh on 4/11/22.
//
#include "MutantStack.hpp"
#include <list>
int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "MSTACK:" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "Copy MSTACK into stack:" << std::endl;
		std::stack<int> s(mstack);
//		std::stack<int> s2(s);
		while (!s.empty())
		{
			std::cout << s.top() << std::endl;
			s.pop();
		}
	}
	std::cout << "*******************" << std::endl;
	{
		std::list<int> l1;
		l1.push_back(5);
		l1.push_back(17);
		std::cout << l1.front() << std::endl;
		l1.pop_back();
		std::cout << l1.size() << std::endl;
		l1.push_back(3);
		l1.push_back(5);
		l1.push_back(737);
		l1.push_back(0);
		std::list<int>::iterator it = l1.begin();
		std::list<int>::iterator ite = l1.end();
		++it;
		--it;
		std::cout << "LIST:" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << "*******************" << std::endl;
	{
		MutantStack<int> mstack;
		for (int i = 0; i < 4; i++)
			mstack.push(i*i);
		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		std::cout << "Last elem: " << *rit << std::endl;

	}
	return 0;
}