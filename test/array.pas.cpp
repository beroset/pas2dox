/** \file
 * Arrays
 */ 
 




    typedef array<array<Integer> >  TArrayOfArray;

   typedef array<Integer>  TArray;

     typedef array<array<array<Integer> > >  TArrayOfArray2;

/// The enumeration
 enum TEnum
{
E1, 
E2, 
E3 
};


    typedef array<set<TEnum> >  TArrayOfSet;

   /// Automatically generated in-place enumeration typedef by pas2dox
enum __inplace_enum_0{E4, E5, E6};
typedef array<set<__inplace_enum_0> >  TArrayOfInPlaceSet;

   /// Automatically generated in-place enumeration typedef by pas2dox
enum __inplace_enum_1{E7, E8, E9};
typedef array<__inplace_enum_1>  TArrayOfInPlaceEnum;

/// The set of in-place enumeration.
 enum TSet
{
A, 
B 
};




// finished
