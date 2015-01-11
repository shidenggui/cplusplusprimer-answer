#include "textquery.h"
#include "queryresult.h"
TextQuery::TextQuery(std::ifstream &is): file(new std::vector<std::string>){
    std::string line;
    while(getline(is, line)){
        file->push_back(line);
        int n = file->size();
        std::istringstream iss(line);
        std::string word;
        while(iss >> word){
            auto &lines = wm[word];
            if(!lines){
                lines.reset(new std::set<line_no>);
            }
            lines->insert(n);
        }
    }
}

QueryResult
TextQuery::query(const std::string &sought) const {
    static std::shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);

    auto loc = wm.find(sought);
    if(loc == wm.end()){
         return QueryResult(sought, nodata, file);
    }else{
        return QueryResult(sought, loc->second, file);
    }
}
