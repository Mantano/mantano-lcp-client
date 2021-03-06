//
//  Created by Artem Brazhnikov on 11/15.
//  Copyright © 2015 Mantano. All rights reserved.
//  Any commercial use is strictly prohibited.
//

#ifndef __CRL_DISTRIBUTION_POINTS_H__
#define __CRL_DISTRIBUTION_POINTS_H__

#include "ICertificate.h"

namespace lcp
{
    class CrlDistributionPoints : public ICrlDistributionPoints
    {
    public:
        explicit CrlDistributionPoints(ICertificateExtension * extension);
        virtual bool HasCrlDistributionPoints() const;
        virtual const StringsList & CrlDistributionPointUrls() const;

    private:
        StringsList m_crlDistributionPointUrls;
    };
}

#endif  //__CRL_DISTRIBUTION_POINTS_H__
