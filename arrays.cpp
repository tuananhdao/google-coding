std::pair<int, int> arr[n];


// map
#include <map>
std::map<char, char> my_map = {
    { 'A', '1' },
    { 'B', '2' },
    { 'C', '3' }
};
my_map.insert({ 5, 50 });
for (auto itr = my_map.begin(); itr != my_map.end(); ++itr) {
    cout << itr->first << '\t' << itr->second << '\n';
}
for (const auto& [key, value] : my_map) {
    std::cout << '[' << key << "] = " << value << "; ";
}
std::cout << "my_map[A] = " << my_map["A"] << '\n';

