/* 
this firmware was made by coseyfannitutti
he gets full credit for it I just modyfied it to work for my Rabelius
 */

#pragma once

#define _x_ KC_NO

#include "quantum.h"

#define LAYOUT_rabelius( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08,  \
    K10, K11, K12, K13, K14, K15, K16, K17, K18,  \
    K20, K21, K22, K23, K24, K25, K26, K27, K28,  \
    K30, K31, K32, K33, K34, K35, K36, K37, K38,  \
	K40, K41, K42, K43, K44, K45, K46, K47, K48,  \
    K50, K51, K52, K53, K54, K55, K56, K57, K58,  \
    K60, K61, K62, K63, K64, K65,      K67, K68,  \
	K70, K71, K72, K73, K74, K75, K76, K77, K78,  \
    K80, K81, K82, K83, K84, K85,      K87, K88,  \
	K90, K91, K92, K93, K94, K95, K96, K97, K98,  \
    KA0, KA1, KA2, KA3,      KA5, KA6, KA7, KA8,  \
    KB0, KB1, KB2, KB3, KB4, KB5, KB6, KB7, KB8   \
) \
{ \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08 }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28 }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38 }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48 }, \
	{ K50, K51, K52, K53, K54, K55, K56, K57, K58 }, \
    { K60, K61, K62, K63, K64, K65, _x_, K67, K68 }, \
    { K70, K71, K72, K73, K74, K75, K76, K77, K78 }, \
    { K80, K81, K82, K83, K84, K85, _x_, K87, K88 }, \
    { K90, K91, K92, K93, K94, K95, K96, K97, K98 }, \
	{ KA0, KA1, KA2, KA3, _x_, KA5, KA6, KA7, KA8 }, \
    { KB0, KB1, KB2, KB3, KB4, KB5, KB6, KB7, KB8 }  \
}
