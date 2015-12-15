#include <gtest/gtest.h>
#include "public/lcp.h"
#include "Sha256HashAlgorithm.h"
#include "TestUtils.h"
#include "TestInfo.h"

namespace lcptest
{
    TEST(Sha256HashAlgorithmTest, PassphraseHash)
    {
        lcp::Sha256HashAlgorithm hashAlg;
        hashAlg.UpdateHash("White whales are huge!");

        lcp::KeyType actual = hashAlg.Hash();
        lcp::KeyType expected(TestUserKey, TestUserKey + sizeof(TestUserKey) / sizeof(TestUserKey[0]));

        ASSERT_TRUE(ArraysMatch<lcp::KeyType>(expected, actual));
    }
}