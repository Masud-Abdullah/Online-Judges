#include <iostream>
using namespace std;

int main() {
	int n;cin>>n;
	if(n<3)cout<<"GOLD\n";
	else if(n<6)cout<<"SILVER\n";
	else cout<<"BRONZE\n";
	return 0;
}
