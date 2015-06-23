#ifndef CCRAZYFLIEWRAPPER_H
#define CCRAZYFLIEWRAPPER_H

//C Wrapper functions (for all public functions)

#include "CCrazyRadioWrapper.h"

typedef void CCrazyflieWrapped;

#ifdef __cplusplus
extern "C" {
#endif
  CCrazyflieWrapped* newCCrazyflie(CCrazyRadioWrapped *cr);
  void deleteCCrazyflie(CCrazyflieWrapped *cf);

  int CCrazyflie_cycle(CCrazyflieWrapped *cf);

  int CCrazyflie_copterInRange(CCrazyflieWrapped *cf);
  int CCrazyflie_isInitialized(CCrazyflieWrapped *cf);

  void CCrazyflie_SendSetpoints(CCrazyflieWrapped *cf, int nSendSetpoints);
  int CCrazyflie_sendsSetpoints(CCrazyflieWrapped *cf);

  void CCrazyflie_setThrust(CCrazyflieWrapped *cf, int nThrust);
  void CCrazyflie_setRoll(CCrazyflieWrapped *cf, float fRoll);
  void CCrazyflie_setPitch(CCrazyflieWrapped *cf, float fPitch);
  void CCrazyflie_setYaw(CCrazyflieWrapped *cf, float fYaw);

  double CCrazyflie_sensorDoubleValue(CCrazyflieWrapped *cf, char *Name);

  int CCrazyflie_thrust(CCrazyflieWrapped *cf);
  float CCrazyflie_roll(CCrazyflieWrapped *cf);
  float CCrazyflie_pitch(CCrazyflieWrapped *cf);
  float CCrazyflie_yaw(CCrazyflieWrapped *cf);
  double CCrazyflie_batteryLevel(CCrazyflieWrapped *cf);
  float CCrazyflie_accX(CCrazyflieWrapped *cf);
  float CCrazyflie_accY(CCrazyflieWrapped *cf);
  float CCrazyflie_accZ(CCrazyflieWrapped *cf);
  float CCrazyflie_accZW(CCrazyflieWrapped *cf);
  float CCrazyflie_asl(CCrazyflieWrapped *cf);
  float CCrazyflie_aslLong(CCrazyflieWrapped *cf);
  float CCrazyflie_temperature(CCrazyflieWrapped *cf);
  float CCrazyflie_pressure(CCrazyflieWrapped *cf);
  float CCrazyflie_gyroX(CCrazyflieWrapped *cf);
  float CCrazyflie_gyroY(CCrazyflieWrapped *cf);
  float CCrazyflie_gyroZ(CCrazyflieWrapped *cf);
  float CCrazyflie_batteryState(CCrazyflieWrapped *cf);
  float CCrazyflie_magX(CCrazyflieWrapped *cf);
  float CCrazyflie_magY(CCrazyflieWrapped *cf);
  float CCrazyflie_magZ(CCrazyflieWrapped *cf);
#ifdef __cplusplus
}
#endif

#endif /*CCRAZYFLIEWRAPPER_H*/