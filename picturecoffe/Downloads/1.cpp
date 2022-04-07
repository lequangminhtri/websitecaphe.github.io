#include<bits/stdc++.h>

using namespace std;
int main(){
	int n; cin >> n;
	int s = 0;
	int a[n+5];
	for(int i = 0;i <= n;i++)
	cin >> a[i];
	for(int i = 0;i <= n;i++)
	s += a[i];
	cout << s ;
	return 0;
}
