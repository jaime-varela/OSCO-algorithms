#pragma once

#include <concepts>

namespace OSCO
{
    template<class T>
    concept NumberT = std::is_arithmetic<T>::value; 

    template<class T>
    concept IndexT = std::is_integral<T>::value;

// TODO: make this into a function type for the 'ChooseNextSchedule' function
//   template<class Func,class number,class index,class coords>
//   concept DerivativeFunction = std::is_arithmetic<number>::value &&
//   std::is_integral<index>::value &&
//   requires(Func aFunc,coords A,number b,index ind) {
//     {A[0] < A[0]} -> std::same_as<bool>;
//     {A[0] + b} -> std::same_as<number>;
//     {aFunc(ind,b,A)} -> std::same_as<number>;
//   };    
} // namespace OSCO
