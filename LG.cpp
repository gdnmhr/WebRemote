#include "LG.h"

uint16_t LG_LENGTH = 72;

uint16_t  LG_POWER[72]    = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AA, 0x00B0, 0x0016, 0x0014, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x0016, 0x0014, 0x0041, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0041, 
                  0x0018, 0x003F, 0x0016, 0x003F, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x003F, 0x0018, 0x0014, 0x0016, 0x0016, 
                  0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0041, 
                  0x0016, 0x003F, 0x0018, 0x06C3};

uint16_t  LG_EJECT[72]    = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0016, 0x0014, 0x0018, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x0014, 0x0016, 0x0014, 0x0018, 0x0012, 0x0018, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x003F, 0x0018, 0x0012, 0x0018, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 
                  0x0018, 0x003F, 0x0016, 0x0041, 0x0016, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x003F, 0x0018, 0x003F, 0x0018, 0x0012, 0x0018, 0x003F, 
                  0x0018, 0x0014, 0x0016, 0x0014, 0x0018, 0x003F, 0x0016, 0x0041, 
                  0x0016, 0x0014, 0x0018, 0x06C3};

uint16_t  LG_FOLDER_UP[72]  = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0018, 0x0014, 0x0016, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x0014, 0x0016, 0x0014, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x003F, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x003F, 0x0018, 0x003F, 0x0018, 0x0012, 
                  0x0018, 0x0014, 0x0018, 0x003F, 0x0016, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x0014, 0x0018, 0x0012, 0x0018, 0x0014, 0x0016, 0x003F, 
                  0x0018, 0x003F, 0x0018, 0x0014, 0x0016, 0x003F, 0x0018, 0x003F, 
                  0x0018, 0x003F, 0x0018, 0x06C3};

uint16_t  LG_FOLDER_DOWN[72]  = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AC, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x003F, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0041, 0x0014, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0043, 0x0014, 0x0016, 0x0014, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0043, 0x0014, 0x0016, 0x0014, 0x0043, 
                  0x0014, 0x0043, 0x0014, 0x0016, 0x0014, 0x0041, 0x0016, 0x0043, 
                  0x0014, 0x0041, 0x0016, 0x06C3};

uint16_t  LG_FUNCTION[72]   = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AC, 0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0041, 0x0014, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0041, 0x0014, 0x0041, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0014, 0x0016, 0x0041, 
                  0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x0041, 
                  0x0014, 0x0043, 0x0014, 0x06C3};

uint16_t  LG_MUTE[72]     = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AC, 0x0018, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0018, 0x003F, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0018, 0x0014, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x003F, 0x0018, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x003F, 0x0018, 0x003F, 0x0018, 0x003F, 
                  0x0018, 0x003F, 0x0016, 0x0041, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0014, 
                  0x0018, 0x0014, 0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x003F, 
                  0x0018, 0x003F, 0x0018, 0x06C3};

uint16_t  LG_VOLUME_UP[72]  = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0018, 0x0014, 0x0016, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x0014, 0x0018, 0x003F, 0x0016, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x0014, 0x0018, 0x0012, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x003F, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x003F, 0x0018, 0x003F, 0x0018, 0x003F, 
                  0x0018, 0x0012, 0x0018, 0x003F, 0x0018, 0x0012, 0x0018, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x0014, 0x0016, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x003F, 0x0018, 0x0014, 0x0016, 0x003F, 0x0018, 0x003F, 
                  0x0018, 0x003F, 0x0018, 0x06C3};

uint16_t  LG_VOLUME_DOWN[72]  = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0018, 0x0012, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x003F, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x0014, 0x0018, 0x0012, 0x0018, 0x0014, 
                  0x0016, 0x0014, 0x0018, 0x003F, 0x0018, 0x0012, 0x0018, 0x0014, 
                  0x0016, 0x0014, 0x0018, 0x0012, 0x0018, 0x003F, 0x0018, 0x003F, 
                  0x0018, 0x0012, 0x0018, 0x0041, 0x0016, 0x0014, 0x0016, 0x0014, 
                  0x0018, 0x0014, 0x0016, 0x0041, 0x0014, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0041, 0x0016, 0x0014, 0x0016, 0x0043, 0x0014, 0x0041, 
                  0x0016, 0x0041, 0x0016, 0x06C3};

uint16_t  LG_PROGRAM[72]    = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0014, 0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0041, 0x0014, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0043, 0x0014, 0x0016, 0x0014, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0043, 0x0014, 0x0016, 0x0014, 0x0043, 
                  0x0014, 0x0043, 0x0014, 0x0016, 0x0014, 0x0016, 0x0016, 0x0041, 
                  0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 0x0043, 0x0014, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x0014, 
                  0x0016, 0x0041, 0x0016, 0x06C3};

uint16_t  LG_EFFECT[72]   = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AE, 0x00AC, 0x0016, 0x0014, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0041, 0x0016, 0x0014, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0041, 
                  0x0016, 0x0014, 0x0016, 0x0043, 0x0014, 0x0041, 0x0016, 0x0041, 
                  0x0016, 0x0041, 0x0016, 0x0041, 0x0014, 0x0043, 0x0014, 0x0016, 
                  0x0016, 0x0041, 0x0014, 0x06C3};

uint16_t  LG_INFO[72]     = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x003F, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0014, 0x0018, 0x0012, 0x0018, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x0041, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x0041, 
                  0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0041, 0x0016, 0x0014, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0016, 0x0041, 0x0016, 0x06C3};

uint16_t  LG_UP[72]     = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AA, 0x00AE, 0x0018, 0x0014, 0x0016, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x0014, 0x0018, 0x003F, 0x0016, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x0014, 0x0018, 0x0012, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x003F, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x0014, 0x0018, 0x003F, 0x0016, 0x003F, 
                  0x0018, 0x003F, 0x0018, 0x0014, 0x0016, 0x0014, 0x0018, 0x003F, 
                  0x0018, 0x0012, 0x0018, 0x003F, 0x0018, 0x0012, 0x0018, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x003F, 0x0018, 0x003F, 0x0018, 0x0012, 
                  0x0018, 0x003F, 0x0018, 0x06C3};

uint16_t  LG_LEFT[72]     = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0016, 0x0014, 0x0018, 0x0012, 0x0018, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x003F, 0x0018, 0x0012, 0x0018, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x0014, 0x0016, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x0014, 0x0018, 0x003F, 0x0016, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x0014, 0x0018, 0x0012, 0x0018, 0x003F, 0x0018, 0x003F, 
                  0x0018, 0x0012, 0x0018, 0x0014, 0x0016, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x0014, 0x0018, 0x003F, 0x0016, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x003F, 0x0018, 0x003F, 0x0018, 0x003F, 0x0018, 0x003F, 
                  0x0016, 0x003F, 0x0018, 0x06C3};

uint16_t  LG_ENTER[72]    = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0018, 0x0014, 0x0016, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0018, 0x0012, 
                  0x0018, 0x0014, 0x0018, 0x0012, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x003F, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x003F, 0x0018, 0x0014, 0x0016, 0x003F, 
                  0x0018, 0x0014, 0x0018, 0x0012, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x0014, 0x0018, 0x003F, 0x0016, 0x0014, 
                  0x0018, 0x003F, 0x0018, 0x003F, 0x0016, 0x003F, 0x0018, 0x003F, 
                  0x0018, 0x003F, 0x0018, 0x06C3};

uint16_t  LG_RIGHT[72]    = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0014, 0x0016, 0x0016, 0x003F, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0016, 0x0014, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x003F, 
                  0x0018, 0x0014, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x0014, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x003F, 0x0018, 0x003F, 0x0016, 0x0041, 0x0016, 0x0041, 
                  0x0016, 0x0041, 0x0016, 0x06C3};

uint16_t  LG_DOWN[72]     = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x003F, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 0x0041, 
                  0x0016, 0x0014, 0x0018, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x003F, 0x0018, 0x0014, 
                  0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x003F, 0x0018, 0x003F, 
                  0x0016, 0x0041, 0x0016, 0x06C3};

uint16_t  LG_SLEEP[72]    = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0018, 0x0012, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0018, 0x003F, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0018, 0x0012, 0x0018, 0x0014, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0014, 0x0018, 0x003F, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0014, 0x0018, 0x0014, 0x0016, 0x0041, 
                  0x0016, 0x003F, 0x0018, 0x003F, 0x0016, 0x0016, 0x0016, 0x003F, 
                  0x0018, 0x003F, 0x0018, 0x003F, 0x0016, 0x0041, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x06C3};

uint16_t  LG_USB_REC[72]    = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0018, 0x0012, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0018, 0x003F, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0018, 0x0014, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0016, 0x0014, 0x0041, 0x0016, 0x0016, 0x0014, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0016, 0x0014, 0x0041, 
                  0x0016, 0x0016, 0x0016, 0x003F, 0x0016, 0x0016, 0x0016, 0x0016, 
                  0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0016, 
                  0x0014, 0x0041, 0x0016, 0x0016, 0x0014, 0x0041, 0x0016, 0x0041, 
                  0x0016, 0x0041, 0x0016, 0x06C3};

uint16_t  LG_DELETE[72]   = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0016, 0x0014, 0x0014, 
                  0x0018, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0016, 0x0014, 
                  0x0018, 0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0018, 0x003F, 0x0016, 0x0041, 0x0016, 0x0014, 
                  0x0018, 0x003F, 0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x0041, 
                  0x0016, 0x003F, 0x0018, 0x0014, 0x0016, 0x0016, 0x0014, 0x0041, 
                  0x0016, 0x0014, 0x0018, 0x06C3};

uint16_t  LG_ONE[72]      = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0016, 0x0014, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0018, 0x0014, 0x0016, 0x003F, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x0016, 0x0014, 0x0041, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 0x0041, 
                  0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x003F, 0x0018, 0x003F, 
                  0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x0014, 
                  0x0016, 0x0041, 0x0016, 0x06C3};

uint16_t  LG_TWO[72]      = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0016, 0x0014, 0x0018, 0x0014, 0x0016, 0x0016, 
                  0x0014, 0x0016, 0x0016, 0x003F, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x003F, 0x0018, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0041, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0018, 0x003F, 
                  0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x0014, 
                  0x0016, 0x0041, 0x0016, 0x06C3};

uint16_t  LG_THREE[72]    = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AE, 0x00AC, 0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x003F, 0x0018, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x003F, 0x0018, 0x003F, 0x0016, 0x0016, 
                  0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 0x0014, 0x0018, 0x003F, 
                  0x0018, 0x0014, 0x0016, 0x0016, 0x0014, 0x0014, 0x0018, 0x003F, 
                  0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x0014, 
                  0x0016, 0x0041, 0x0016, 0x06C3};

uint16_t  LG_FOUR[72]     = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0018, 0x0012, 0x0018, 0x0014, 0x0016, 0x0016, 
                  0x0014, 0x0016, 0x0016, 0x003F, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0041, 
                  0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 0x0041, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x0014, 
                  0x0018, 0x003F, 0x0016, 0x0041, 0x0016, 0x003F, 0x0018, 0x0014, 
                  0x0016, 0x0041, 0x0016, 0x06C3};

uint16_t  LG_FIVE[72]     = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0014, 
                  0x0018, 0x0014, 0x0016, 0x003F, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0014, 0x0041, 0x0016, 0x0016, 0x0016, 0x003F, 
                  0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x003F, 
                  0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 
                  0x0016, 0x0041, 0x0018, 0x003F, 0x0016, 0x0041, 0x0016, 0x0016, 
                  0x0014, 0x0041, 0x0016, 0x06C3};

uint16_t  LG_SIX[72]      = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AC, 0x0018, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0018, 0x003F, 0x0016, 0x0016, 0x0014, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0016, 
                  0x0014, 0x0016, 0x0016, 0x003F, 0x0018, 0x0014, 0x0016, 0x0016, 
                  0x0014, 0x0016, 0x0016, 0x0014, 0x0018, 0x003F, 0x0016, 0x003F, 
                  0x0018, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x003F, 
                  0x0018, 0x0014, 0x0018, 0x003F, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x003F, 0x0016, 0x0041, 0x0018, 0x003F, 0x0016, 0x0016, 
                  0x0016, 0x003F, 0x0018, 0x06C3};

uint16_t  LG_SEVEN[72]    = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x003F, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0016, 0x0014, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x003F, 
                  0x0018, 0x0014, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x003F, 
                  0x0018, 0x0014, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0041, 0x0016, 0x003F, 0x0018, 0x003F, 0x0016, 0x0016, 
                  0x0016, 0x003F, 0x0018, 0x06C3};

uint16_t  LG_EIGHT[72]    = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AE, 0x00AC, 0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0014, 0x0016, 0x0016, 0x003F, 0x0016, 0x0016, 0x0016, 0x0016, 
                  0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 
                  0x0016, 0x0016, 0x0014, 0x0041, 0x0016, 0x0016, 0x0014, 0x0016, 
                  0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0014, 0x0041, 0x0018, 0x0014, 0x0016, 0x0014, 0x0016, 0x0041, 
                  0x0016, 0x0016, 0x0014, 0x0041, 0x0016, 0x0041, 0x0016, 0x003F, 
                  0x0018, 0x0014, 0x0016, 0x0041, 0x0016, 0x003F, 0x0018, 0x0014, 
                  0x0016, 0x0041, 0x0016, 0x06C3};

uint16_t  LG_NINE[72]     = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AE, 0x00AC, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x003F, 0x0016, 0x0016, 0x0016, 0x0016, 
                  0x0014, 0x0014, 0x0018, 0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0016, 0x0014, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x003F, 0x0018, 0x0014, 0x0016, 0x0016, 0x0014, 0x0041, 
                  0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x003F, 
                  0x0018, 0x0014, 0x0016, 0x0041, 0x0016, 0x003F, 0x0018, 0x0014, 
                  0x0016, 0x003F, 0x0018, 0x06C3};

uint16_t  LG_CLOCK[72]    = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0018, 0x003F, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0018, 0x0014, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0041, 
                  0x0016, 0x003F, 0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x003F, 0x0018, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x0041, 
                  0x0016, 0x003F, 0x0018, 0x06C3};

uint16_t  LG_ZERO[72]     = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x003F, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0014, 0x0018, 0x0014, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0041, 0x0016, 0x0014, 
                  0x0016, 0x0041, 0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x003F, 
                  0x0018, 0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x003F, 
                  0x0018, 0x0014, 0x0016, 0x003F, 0x0018, 0x003F, 0x0016, 0x0016, 
                  0x0016, 0x003F, 0x0018, 0x06C3};

uint16_t  LG_ALARM[72]    = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AE, 0x00AC, 0x0016, 0x0014, 0x0018, 0x0014, 0x0016, 0x0016, 
                  0x0014, 0x0016, 0x0016, 0x003F, 0x0018, 0x0014, 0x0016, 0x0016, 
                  0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 
                  0x0016, 0x0016, 0x0014, 0x0041, 0x0018, 0x0014, 0x0014, 0x0016, 
                  0x0016, 0x0016, 0x0014, 0x0041, 0x0016, 0x0016, 0x0014, 0x0041, 
                  0x0018, 0x003F, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 
                  0x0018, 0x0014, 0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x003F, 0x0018, 0x003F, 0x0018, 0x003F, 
                  0x0016, 0x003F, 0x0018, 0x06C3};

uint16_t  LG_SET[72]      = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AC, 0x0018, 0x0014, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0041, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0016, 0x0014, 0x0016, 0x0014, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x003F, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x003F, 0x0018, 0x003F, 
                  0x0016, 0x0016, 0x0016, 0x003F, 0x0016, 0x0041, 0x0016, 0x0041, 
                  0x0016, 0x0041, 0x0016, 0x003F, 0x0018, 0x0014, 0x0016, 0x0014, 
                  0x0016, 0x0041, 0x0016, 0x06C3};

uint16_t  LG_PTY[72]      = { 0x0000, 0x006D, 0x0022, 0x0000, 
                  0x00AC, 0x00AE, 0x0016, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 
                  0x0014, 0x0016, 0x0016, 0x003F, 0x0018, 0x0014, 0x0016, 0x0016, 
                  0x0014, 0x0016, 0x0016, 0x0014, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x0016, 0x0014, 0x0041, 0x0016, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0016, 0x0014, 0x0041, 0x0016, 0x0014, 0x0018, 0x0014, 
                  0x0016, 0x0016, 0x0014, 0x0041, 0x0016, 0x0041, 0x0016, 0x0041, 
                  0x0016, 0x0014, 0x0016, 0x0016, 0x0016, 0x003F, 0x0016, 0x0041, 
                  0x0018, 0x003F, 0x0016, 0x0016, 0x0014, 0x0016, 0x0016, 0x0014, 
                  0x0016, 0x0041, 0x0016, 0x06C3};

uint16_t  LG_HOLD[10]     = { 0x0000, 0x006D, 0x0003, 0x0000, 
                  0x00AE, 0x00AC, 0x0018, 0x003F, 0x0016, 0x06C3};
				  
uint16_t getLGLength() {
	return LG_LENGTH;
}

uint16_t* getLGPower() {
	return LG_POWER;
}

uint16_t* getLGEject() {
	return LG_EJECT;
}

uint16_t* getLGFolderUp() {
	return LG_FOLDER_UP;
}

uint16_t* getLGFolderDown() {
	return LG_FOLDER_DOWN;
}

uint16_t* getLGFunction() {
	return LG_FUNCTION;
}

uint16_t* getLGMute() {
	return LG_MUTE;
}

uint16_t* getLGVolumeUp() {
	return LG_VOLUME_UP;
}

uint16_t* getLGVolumeDown() {
	return LG_VOLUME_DOWN;
}

uint16_t* getLGProgram() {
	return LG_PROGRAM;
}

uint16_t* getLGEffect() {
	return LG_EFFECT;
}

uint16_t* getLGInfo() {
	return LG_INFO;
}

uint16_t* getLGUp() {
	return LG_UP;
}

uint16_t* getLGLeft() {
	return LG_LEFT;
}

uint16_t* getLGEnter() {
	return LG_ENTER;
}

uint16_t* getLGRight() {
	return LG_RIGHT;
}

uint16_t* getLGDown() {
	return LG_DOWN;
}

uint16_t* getLGSleep() {
	return LG_SLEEP;
}

uint16_t* getLGUSBRec() {
	return LG_USB_REC;
}

uint16_t* getLGDelete() {
	return LG_DELETE;
}

uint16_t* getLGOne() {
	return LG_ONE;
}

uint16_t* getLGTwo() {
	return LG_TWO;
}

uint16_t* getLGThree() {
	return LG_THREE;
}

uint16_t* getLGFour() {
	return LG_FOUR;
}

uint16_t* getLGFive() {
	return LG_FIVE;
}

uint16_t* getLGSix() {
	return LG_SIX;
}

uint16_t* getLGSeven() {
	return LG_SEVEN;
}

uint16_t* getLGEight() {
	return LG_EIGHT;
}

uint16_t* getLGNine() {
	return LG_NINE;
}

uint16_t* getLGClock() {
	return LG_CLOCK;
}

uint16_t* getLGZero() {
	return LG_ZERO;
}

uint16_t* getLGAlarm() {
	return LG_ALARM;
}

uint16_t* getLGSet() {
	return LG_SET;
}

uint16_t* getLGPTY() {
	return LG_PTY;
}