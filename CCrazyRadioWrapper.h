#ifndef CCRAZYRADIOWRAPPER_H
#define CCRAZYRADIOWRAPPER_H

//C Wrapper functions (for some public functions)

typedef void CCrazyRadioWrapped;

#ifdef __cplusplus
extern "C" {
#endif
  CCrazyRadioWrapped* newCCrazyRadio(char *radioId);
  void deleteCCrazyRadio(CCrazyRadioWrapped *cr);
  int CCrazyRadio_startRadio(CCrazyRadioWrapped *cr);
#ifdef __cplusplus
}
#endif

#endif /*CCRAZYRADIOWRAPPER_H*/