////////////////////////////////////////////////////////////////////////
// \file    SRMichelTag.cxx
// \brief   Adaptation of sbnd::MichelTag
// \author  Robert Miller-Darby (R.Darby@sussex.ac.uk)
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRMichelTag.h"

#include <climits>

namespace caf
{

  SRMichelTag::SRMichelTag()
  {}

  void SRMichelTag::setDefault()
  {
    muontime = -9999.;
    micheltime = -9999.;
    crt = -1;
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////