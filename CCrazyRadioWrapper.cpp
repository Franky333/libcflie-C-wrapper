//C Wrapper functions (for some public functions)

#include <string.h>
using namespace std;

#include "CCrazyRadioWrapper.h"
#include "CCrazyRadio.h"

extern "C"
{
  CCrazyRadioWrapped* newCCrazyRadio(char *radioId) 
  {
  	string strRadioId(radioId);
  	CCrazyRadio *CCRadio = new CCrazyRadio(strRadioId);
    return (CCrazyRadioWrapped *)CCRadio;
  }
  void deleteCCrazyRadio(CCrazyRadioWrapped *cr)
  {
  	CCrazyRadio *CCRadio = (CCrazyRadio *)cr;
  	delete CCRadio;
  }
  int CCrazyRadio_startRadio(CCrazyRadioWrapped *cr)
  {
  	CCrazyRadio *CCRadio = (CCrazyRadio *)cr;
    if(CCRadio->startRadio()) return 1;
  	else return 0;
  }
}
