{* \file
 * \brief An unit using other units with named files
 }
unit using_in;

uses
  {$IFDEF UNIX}{$IFDEF UseCThreads}
  cthreads,
  {$ENDIF}{$ENDIF}
  SysUtils,
  Classes,
  CustApp,
//	KeyEvents, // this should be ignored
  Arraydef in '..\Shared\Arraydef.pas',
  AutoAdd in '..\Common\AutoAdd.pas',
  Artery in '..\Shared\Artery.pas';


type

{* A set type of enumeration defined in enum.pas }
TMsgScanSet = set of TMsgScan;

interface

implementation

end.
