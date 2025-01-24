////////////////////////////////////////////////////////////////////////
// \file    SRMichelTag.h
// \brief   Adaptation of sbnd::MichelTag
// \author  Robert Miller-Darby (rdarby@sussex.ac.uk)
////////////////////////////////////////////////////////////////////////
#ifndef SRMICHELTAG_H
#define SRMICHELTAG_H

#include "sbnanaobj/StandardRecord/SRConstants.h"
#include <vector>

namespace caf
{
  /// Optical Flash -- a summary of multiple optical hits that have been determined to be associated
  class SRMichelTag
  {
  public:
    SRMichelTag();

    float muontime         { kSignalingNaN                }; //!< Muon timestamp from deconvolved PMT waveforms [us].
    float micheltime       { kSignalingNaN                }; //!< Miche timestamp from deconvolved PMT waveforms [us].
    int crt                { kUninitializedInt            }; //!< CRT plane containing the muon hit

    void setDefault();

  };

} // end namespace

#endif // SRMICHELTAG_H
//////////////////////////////////////////////////////////////////////////////
