#pragma once

#include <filesystem>
#include <forward_list>
#include <memory>

#include "pugixml.hpp"

#include "interface/iparser.hpp"
#include "exception.hpp"

namespace xrep {
namespace parser {

namespace fs = std::filesystem;
using pugi::xml_node;
using std::forward_list;
using std::unique_ptr;

class FileSystemParser : interface::ParserInterface<fs::path, fs::path> {
private:
    forward_list<unique_ptr<fs::path>> objects;

public:
    FileSystemParser(const xml_node& config);
    ~FileSystemParser() = default;

    bool search_objects_to_replase(const fs::path& search_point) const;
    forward_list<unique_ptr<fs::path>>& get_objects_to_replase() const;
};

}
}
