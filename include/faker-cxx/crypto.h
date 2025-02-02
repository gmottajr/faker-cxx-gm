#pragma once

#include <optional>
#include <string>

#include "faker-cxx/export.h"

namespace faker::crypto
{
/**
 * @brief Returns a random SHA256 hash or hash of provided data.
 *
 * @returns SHA256 hash string.
 *
 * @code
 * faker::crypto::sha256("hello world") // "b94d27b9934d3e08a52e52d7da7dabfac484efe37a5380ee9088f7ace2efcde9"
 * faker::crypto::sha256()    // Random hash of random
 * @endcode
 */
FAKER_CXX_EXPORT std::string sha256(std::optional<std::string> = std::nullopt);

/**
 * @brief Returns a random SHA1 hash or hash of provided data.
 *
 * @returns SHA1 hash string.
 *
 * @code
 * faker::crypto::sha1("hello world") // "2ef7bde608ce5404e97d5f042f95f89f1c232871"
 * faker::crypto::sha1()    // Random hash of random
 * @endcode
 */
FAKER_CXX_EXPORT std::string sha1(std::optional<std::string> = std::nullopt);

/**
 * @brief Returns a random MD5 hash or hash of provided data.
 *
 * @returns MD5 hash string.
 *
 * @code
 * faker::crypto::md5("hello world") // "5eb63bbbe01eeed093cb22bb8f5acdc3"
 * faker::crypto::md5()    // Random hash of random word
 * @endcode
 */
FAKER_CXX_EXPORT std::string md5(std::optional<std::string> = std::nullopt);
}
