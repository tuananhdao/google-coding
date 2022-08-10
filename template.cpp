#include <iostream>

#define int long long

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int numCases;
  std::cin >> numCases;

  for(int case = 1; case <= numCases; case++) {
    int n, l;
    std::cin >> n >> l;
    
    int Array[100];
    for(int i=0; i<100; i++)
      cin>>Array[i];
    
    std::cout << "Case #" << case << ": " << std::endl;
  }

  return 0;
}
