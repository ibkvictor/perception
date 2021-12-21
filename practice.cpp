#include <iostream>
#include <vector>
#include <cstdlib>

int main (){
	using std::cout;
	using std::cin;
	using std::vector;
	using std::rand;
	using std::endl;		

	vector<int> arrai;
	vector<int> arrai1 = {1,2,3,4,5};

	for(auto i=1; i<=10; i++){
		arrai.push_back(rand());
		cout<<arrai[i]<<arrai.size()<<i<<endl;
	}

	for(auto &i: arrai1)
		cout<<arrai1[i]<<&i<<endl;
}
