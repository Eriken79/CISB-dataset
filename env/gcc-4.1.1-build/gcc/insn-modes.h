/* Generated automatically from machmode.def and config/i386/i386-modes.def
   by genmodes.  */

#ifndef GCC_INSN_MODES_H
#define GCC_INSN_MODES_H

enum machine_mode
{
  VOIDmode,                /* machmode.def:146 */
  BLKmode,                 /* machmode.def:150 */
  CCmode,                  /* machmode.def:178 */
  CCGCmode,                /* config/i386/i386-modes.def:58 */
  CCGOCmode,               /* config/i386/i386-modes.def:59 */
  CCNOmode,                /* config/i386/i386-modes.def:60 */
  CCZmode,                 /* config/i386/i386-modes.def:61 */
  CCFPmode,                /* config/i386/i386-modes.def:62 */
  CCFPUmode,               /* config/i386/i386-modes.def:63 */
  BImode,                  /* machmode.def:153 */
  QImode,                  /* machmode.def:158 */
  HImode,                  /* machmode.def:159 */
  SImode,                  /* machmode.def:160 */
  DImode,                  /* machmode.def:161 */
  TImode,                  /* machmode.def:162 */
  SFmode,                  /* machmode.def:173 */
  DFmode,                  /* machmode.def:174 */
  XFmode,                  /* config/i386/i386-modes.def:25 */
  TFmode,                  /* config/i386/i386-modes.def:26 */
  CQImode,                 /* machmode.def:186 */
  CHImode,                 /* machmode.def:186 */
  CSImode,                 /* machmode.def:186 */
  CDImode,                 /* machmode.def:186 */
  CTImode,                 /* machmode.def:186 */
  SCmode,                  /* machmode.def:187 */
  DCmode,                  /* machmode.def:187 */
  XCmode,                  /* machmode.def:187 */
  TCmode,                  /* machmode.def:187 */
  V4QImode,                /* config/i386/i386-modes.def:66 */
  V2HImode,                /* config/i386/i386-modes.def:66 */
  V8QImode,                /* config/i386/i386-modes.def:67 */
  V4HImode,                /* config/i386/i386-modes.def:67 */
  V2SImode,                /* config/i386/i386-modes.def:67 */
  V16QImode,               /* config/i386/i386-modes.def:68 */
  V8HImode,                /* config/i386/i386-modes.def:68 */
  V4SImode,                /* config/i386/i386-modes.def:68 */
  V2DImode,                /* config/i386/i386-modes.def:68 */
  V32QImode,               /* config/i386/i386-modes.def:74 */
  V16HImode,               /* config/i386/i386-modes.def:73 */
  V8SImode,                /* config/i386/i386-modes.def:72 */
  V4DImode,                /* config/i386/i386-modes.def:71 */
  V2SFmode,                /* config/i386/i386-modes.def:69 */
  V4SFmode,                /* config/i386/i386-modes.def:70 */
  V2DFmode,                /* config/i386/i386-modes.def:70 */
  V8SFmode,                /* config/i386/i386-modes.def:76 */
  V4DFmode,                /* config/i386/i386-modes.def:75 */
  MAX_MACHINE_MODE,

  MIN_MODE_RANDOM = VOIDmode,
  MAX_MODE_RANDOM = BLKmode,

  MIN_MODE_CC = CCmode,
  MAX_MODE_CC = CCFPUmode,

  MIN_MODE_INT = QImode,
  MAX_MODE_INT = TImode,

  MIN_MODE_PARTIAL_INT = VOIDmode,
  MAX_MODE_PARTIAL_INT = VOIDmode,

  MIN_MODE_FLOAT = SFmode,
  MAX_MODE_FLOAT = TFmode,

  MIN_MODE_COMPLEX_INT = CQImode,
  MAX_MODE_COMPLEX_INT = CTImode,

  MIN_MODE_COMPLEX_FLOAT = SCmode,
  MAX_MODE_COMPLEX_FLOAT = TCmode,

  MIN_MODE_VECTOR_INT = V4QImode,
  MAX_MODE_VECTOR_INT = V4DImode,

  MIN_MODE_VECTOR_FLOAT = V2SFmode,
  MAX_MODE_VECTOR_FLOAT = V4DFmode,

  NUM_MACHINE_MODES = MAX_MACHINE_MODE
};

#define CONST_MODE_SIZE
#define CONST_MODE_BASE_ALIGN

#endif /* insn-modes.h */
