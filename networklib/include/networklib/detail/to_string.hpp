#ifndef DETAIL_TO_STRING_HPP
#define DETAIL_TO_STRING_HPP
#include <ios>
#include <sstream>
#include <string>

namespace tal {
namespace detail {

template <typename T>
std::string to_string(const T& thing) {
    std::stringstream ss;
    ss << std::boolalpha << thing;
    return ss.str();
}

}  // namespace detail
}  // namespace tal
#endif  // DETAIL_TO_STRING_HPP