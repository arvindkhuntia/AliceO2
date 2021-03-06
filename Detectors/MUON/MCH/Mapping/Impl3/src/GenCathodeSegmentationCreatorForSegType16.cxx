// Copyright 2019-2020 CERN and copyright holders of ALICE O2.
// See https://alice-o2.web.cern.ch/copyright for details of the copyright holders.
// All rights not expressly granted are reserved.
//
// This software is distributed under the terms of the GNU General Public
// License v3 (GPL Version 3), copied verbatim in the file "COPYING".
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.
//
// This file has been generated. Do not modify it by hand or your changes might
// be lost.
//
#include "CathodeSegmentationCreator.h"

namespace o2
{
namespace mch
{
namespace mapping
{
namespace impl3
{
CathodeSegmentation* createSegType16(bool isBendingPlane)
{
  if (isBendingPlane) {
    return new CathodeSegmentation{
      16,
      true,
      /* PG */
      {{3, 3, 0, 0, -20},
       {4, 3, 0, 20, -20},
       {7, 3, 0, -40, -20},
       {8, 3, 0, -20, -20},
       {101, 0, 0, 20, -4},
       {102, 2, 0, 10, 4},
       {103, 1, 0, 0, -4},
       {106, 0, 0, -20, -4},
       {107, 2, 0, -30, 4},
       {108, 1, 0, -40, -4}},
      /* PGT */
      {/* L10 */ {2, 48, {15, 16, 14, 17, 13, 18, 12, 19, 11, 20, 10, 21, 9, 22, 8, 23, 7, 24, 6, 25, 5, 26, 4, 27, 3, 28, 2, 29, 1, 30, 0, 31, -1, 48, -1, 49, -1, 50, -1, 51, -1, 52, -1, 53, -1, 54, -1, 55, -1, 56, -1, 57, -1, 58, -1, 59, -1, 60, -1, 61, -1, 62, -1, 63, -1, 32, -1, 33, -1, 34, -1, 35, -1, 36, -1, 37, -1, 38, -1, 39, -1, 40, -1, 41, -1, 42, -1, 43, -1, 44, -1, 45, -1, 46, -1, 47}},
       /* L9 */ {2, 48, {63, 32, 62, 33, 61, 34, 60, 35, 59, 36, 58, 37, 57, 38, 56, 39, 55, 40, 54, 41, 53, 42, 52, 43, 51, 44, 50, 45, 49, 46, 48, 47, 31, -1, 30, -1, 29, -1, 28, -1, 27, -1, 26, -1, 25, -1, 24, -1, 23, -1, 22, -1, 21, -1, 20, -1, 19, -1, 18, -1, 17, -1, 16, -1, 15, -1, 14, -1, 13, -1, 12, -1, 11, -1, 10, -1, 9, -1, 8, -1, 7, -1, 6, -1, 5, -1, 4, -1, 3, -1, 2, -1, 1, -1, 0, -1}},
       /* O11 */ {2, 32, {31, 48, 30, 49, 29, 50, 28, 51, 27, 52, 26, 53, 25, 54, 24, 55, 23, 56, 22, 57, 21, 58, 20, 59, 19, 60, 18, 61, 17, 62, 16, 63, 15, 32, 14, 33, 13, 34, 12, 35, 11, 36, 10, 37, 9, 38, 8, 39, 7, 40, 6, 41, 5, 42, 4, 43, 3, 44, 2, 45, 1, 46, 0, 47}},
       /* O12 */ {2, 32, {47, 0, 46, 1, 45, 2, 44, 3, 43, 4, 42, 5, 41, 6, 40, 7, 39, 8, 38, 9, 37, 10, 36, 11, 35, 12, 34, 13, 33, 14, 32, 15, 63, 16, 62, 17, 61, 18, 60, 19, 59, 20, 58, 21, 57, 22, 56, 23, 55, 24, 54, 25, 53, 26, 52, 27, 51, 28, 50, 29, 49, 30, 48, 31}}},
      /* PS */
      {{10, 0.5}}};
  } else {
    return new CathodeSegmentation{
      16,
      false,
      /* PG */
      {{1025, 3, 0, 20, -20},
       {1026, 2, 0, 0, -20},
       {1029, 3, 0, -20, -20},
       {1030, 2, 0, -40, -20},
       {1128, 0, 0, 0, 0},
       {1129, 1, 0, 20, 0},
       {1133, 0, 0, -40, 0},
       {1134, 1, 0, -20, 0}},
      /* PGT */
      {/* O5 */ {28, 2, {47, 45, 43, 41, 39, 37, 35, 33, 63, 61, 59, 57, 55, 53, 51, 49, 31, 29, 27, 25, 23, 21, 19, 17, 15, 13, 11, 9, 46, 44, 42, 40, 38, 36, 34, 32, 62, 60, 58, 56, 54, 52, 50, 48, 30, 28, 26, 24, 22, 20, 18, 16, 14, 12, 10, 8}},
       /* O6 */ {28, 2, {39, 37, 35, 33, 63, 61, 59, 57, 55, 53, 51, 49, 31, 29, 27, 25, 23, 21, 19, 17, 15, 13, 11, 9, 7, 5, 3, 1, 38, 36, 34, 32, 62, 60, 58, 56, 54, 52, 50, 48, 30, 28, 26, 24, 22, 20, 18, 16, 14, 12, 10, 8, 6, 4, 2, 0}},
       /* O7 */ {28, 2, {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 48, 50, 52, 54, 56, 58, 60, 62, 32, 34, 36, 38, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 49, 51, 53, 55, 57, 59, 61, 63, 33, 35, 37, 39}},
       /* O8 */ {28, 2, {8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 48, 50, 52, 54, 56, 58, 60, 62, 32, 34, 36, 38, 40, 42, 44, 46, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 49, 51, 53, 55, 57, 59, 61, 63, 33, 35, 37, 39, 41, 43, 45, 47}}},
      /* PS */
      {{0.714285714, 10}}};
  }
}
class CathodeSegmentationCreatorRegisterCreateSegType16
{
 public:
  CathodeSegmentationCreatorRegisterCreateSegType16()
  {
    registerCathodeSegmentationCreator(16, createSegType16);
  }
} aCathodeSegmentationCreatorRegisterCreateSegType16;

} // namespace impl3
} // namespace mapping
} // namespace mch
} // namespace o2
