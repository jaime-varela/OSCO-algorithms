#pragma once
#include <vector>

#include "osco_concepts.hpp"

namespace OSCO
{

    template <typename RequestT>
    class Schedule
    {
    private:
        std::vector<RequestT> requests;

    public:
        // TODO constructor

        Schedule& operator |(RequestT&& value)
        {
            requests.push_back(std::forward<RequestT>(value));
            return *this;
        }
    };


} // namespace OSCO
