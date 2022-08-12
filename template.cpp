#include <iostream>

#define int long long

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int numCases;
  std::cin >> numCases;

  for(int caseNum = 1; caseNum <= numCases; caseNum++) {
    int n, l;
    std::cin >> n >> l;
    
    int Array[100];
    for(int i=0; i<100; i++)
      cin>>Array[i];
    
    std::cout << "Case #" << caseNum << ": " << std::endl;
  }

  return 0;
}
