#include <iostream>
#include <string>
#include <assert.h>
#include "sqlite3.h"
using namespace std;
static sqlite3 *bd;

bool openBd(const char* bdName) {
    int status = sqlite3_open(bdName, &bd);
    assert(status == SQLITE_OK);
    
    return status;
}