# Dictionaries_and_Maps

map<int,char> example = {{1,'a'},{2,'b'}};

    auto search = example.find(2);
    if(search != example.end()) {
        std::cout << "Found " << search->first << " " << search->second << '\n';
    }
    else {
        std::cout << "Not found\n";
    }


map<string, int> mapExample;

mapExample["key 1"] = 1;
mapExample["key 2"] = 2;



