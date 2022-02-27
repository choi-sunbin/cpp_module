#include <iostream>
#include <string>
#include <list>
#include "mutantstack.cpp"

int main(void)
{
	{
		std::cout << "================ mutant stack test ================" << std::endl;
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
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << "================ copy constructor test ================" << std::endl;
		MutantStack<int> mstack_copy(mstack);
		
		std::cout << "top : " << mstack_copy.top() << std::endl;
		mstack_copy.pop();
		std::cout << "POP!" << std::endl;
		
		std::cout << "top : " << mstack_copy.top() << std::endl;
		mstack_copy.pop();
		std::cout << "POP!" << std::endl;
		
		std::cout << "top : " << mstack_copy.top() << std::endl;
		mstack_copy.pop();
		std::cout << "POP!" << std::endl;
		std::cout << "top : " << mstack_copy.top() << std::endl;
		std::cout << "PUSH 10!" << std::endl;
		mstack_copy.push(10);
		std::cout << "top : " << mstack_copy.top() << std::endl;
		
		std::cout << "PUSH 11!" << std::endl;
		mstack_copy.push(11);
		std::cout << "top : " << mstack_copy.top() << std::endl;
		
		std::cout << "PUSH 12!" << std::endl;
		mstack_copy.push(12);
		std::cout << "top : " << mstack_copy.top() << std::endl;
	
		MutantStack<int>::iterator iter_c = mstack_copy.begin();
		while (iter_c != mstack_copy.end())
		{
			std::cout << "copy value : " << *iter_c << std::endl;
			iter_c++;
		}
		std::cout << std::endl;


		std::cout << "================ reverse iterator test================" << std::endl;
		MutantStack<int> mstack_rev;
		int loop;
		loop = 1;
		while (loop <= 5)
		{
			mstack_rev.push(loop++);
		}

		MutantStack<int>::reverse_iterator r_iter = mstack_rev.rbegin();
		while (r_iter != mstack_rev.rend())
		{
			std::cout << "reverse value : " << *r_iter << std::endl;
			r_iter++;
		}
	}
	return 0;
}
