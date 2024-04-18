#include <vector>
class RandomizedSet {
private:
    std::vector<int> data;
public:
    RandomizedSet() {
        data = std::vector<int>();
    }

    bool insert(int val) {
        for (int i = 0; i < data.size(); ++i){
            if(data[i] == val){
                return false;
            }
        }
        data.push_back(val);
        return true;
    }

    bool remove(int val) {
        int remove_index;
        for (int i = 0; i < data.size(); ++i){
            if(data[i] == val){
                remove_index = i;
                break;
            }
        }
        if(remove_index < 0) {
            return false;
        }
        std::vector<int> result = std::vector<int>();
        for (int i = 0; i < remove_index; ++i){
            result.push_back(data[i]);
        }
        for(int i = data.size() - remove_index;i < data.size();i++){
            result.push_back(data[i]);
        }
        return true;
    }

    int getRandom() {

    }
};
