/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_84.h
Label Definition File: CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open.label.xml
Template File: source-sinks-84.tmpl.h
*/
/*
 * @description
 * CWE: 773 Missing Reference to Active File Descriptor or Handle
 * BadSource:  Create a file descriptor using open()
 * Sinks:
 *    GoodSink: Close the file before reusing the file descriptor
 *    BadSink : Reassign the file descriptor before closing the file
 * Flow Variant: 84 Data flow: data passed to class constructor and destructor by declaring the class object on the heap and deleting it after use
 *
 * */

#include "std_testcase.h"

#ifdef _WIN32
#define OPEN _open
#define CLOSE _close
#else
#include <unistd.h>
#define OPEN open
#define CLOSE close
#endif

namespace CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_84
{

#ifndef OMITBAD

class CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_84_bad
{
public:
    CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_84_bad(int dataCopy);
    ~CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_84_bad();

private:
    int data;
};

#endif /* OMITBAD */

#ifndef OMITGOOD

class CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_84_goodB2G
{
public:
    CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_84_goodB2G(int dataCopy);
    ~CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_84_goodB2G();

private:
    int data;
};

#endif /* OMITGOOD */

}
