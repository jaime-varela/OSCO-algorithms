#pragma once
#include "osco_concepts.hpp"
#include "osco_data_structures.hpp"

namespace OSCO
{
    
    // Generic algorithm Figure 2.1
    template <class RequestT,IndexT,class ChooseFunction>
    myType Online_Algorithm (OrdereredRequestSet<RequestT> requests, IndexT t_start, IndexT t_end, ChooseFunction Choose_Requests) 
    {
        auto current_schedule = Schedule<RequestT>();
        for (IndexT t_step = t_start; t_step <= t_end; t_step++)
        {
            auto chosen_request = Choose_Requests(current_schedule,requests.sub_sequence(t_start,t_step));
            current_schedule = current_schedule | chosen_request;
        }
        return current_schedule;
    }


} // namespace OSCO
