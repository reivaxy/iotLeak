/**
 *  Definition of the config data structure for the iotSwitch module and the class to persist it to EEPROM 
 *  Xavier Grosjean 2018
 *  Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International Public License
 */
 
#pragma once

#include <XIOTConfig.h>
#include <XUtils.h>

#define CONFIG_VERSION 20
#define CONFIG_NAME "Leak"

#define DEFAULT_AUTOWAKE_VALUE 0

struct LeakConfigStruct:ModuleConfigStruct {
  // Add config fields needed if any
  int autoWake = DEFAULT_AUTOWAKE_VALUE; // delay to periodically wake up from deep sleep, in hours
};

class LeakConfigClass:public ModuleConfigClass {
public:
  LeakConfigClass(unsigned int version, const char* name);
  void initFromDefault();
  const char* getDefaultUIClassName() override;

  void setAutoWake(int);
  int getAutoWake(void);
protected:
  LeakConfigStruct* _getDataPtr(void);  
};
