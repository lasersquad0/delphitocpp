
type

TObject = class;

PInteger = ^Integer;
PCardinal = ^Cardinal;

TBytes = array of Bytes;

Exception = class end;
EOutOfMemory = class end;

TGUID = record
    D1: Cardinal;
    D2: Word;
    D3: Word;
    D4: array[0..7] of Byte;
end;
