/** \file
 * \brief Sample source for funcions and function pointers.
 */ 
 



/// <summary>A normal function declaration.</summary>
/// <param name="Arg">A typical argument.</param>
/// <returns>A typical return value.</returns>
   
Integer NormalFunc (Integer Arg 
);


/// <summary>A normal procedure declaration.</summary>
/// <param name="Arg">A typical argument.</param>
  
NormalProc (Integer Arg 
);


/// <summary>A type definition for a function pointer.</summary>
/// <param name="Arg">A typical argument.</param>
/// <returns>A typical return value.</returns>
    typedef Integer (*FuncPtrType)(Integer Arg 
);



/// <summary>An ordinary variable.</summary>
  Integer avalue; 


/// <summary>A function pointer variable.</summary>
   FuncPtrType FuncPtr; 


/// <summary>A function pointer variable without typedef.</summary>
/// <param name="Arg">An in-place function pointer's argument.</param>
/// <returns>An in-place function pointer's return value.</returns>
    Integer (*FuncPtrInPlace)(Integer Arg 
);


/// <summary>A normal function declaration.</summary>
/// <param name="Arg">A typical argument.</param>
/// <returns>A typical return value.</returns>
   
Integer AnotherNormalFunc (Integer Arg 
);


/// <summary>A procedure pointer variable without typedef.</summary>
/// <param name="Arg">An in-place procedure pointer's argument.</param>
/// <returns>An in-place procedure pointer's return value.</returns>
  void (*ProcPtrInPlace)(Integer Arg 
);


/// <summary>A function pointer variable without arguments and typedef.</summary>
/// <returns>An in-place function pointer's return value.</returns>
 Integer (*FuncPtrInPlaceWithoutParam)();


/// <summary>A procedure pointer variable without arguments and typedef.</summary>
/// <returns>An in-place procedure pointer's return value.</returns>
 void (*ProcPtrInPlaceWithoutParam)();





// finished

