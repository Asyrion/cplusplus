// Not finished!

#include <algorithm>
#include <array>
#include <cstint>
#include <numeric>

// These headers are only needed for demonstrating purposes
#include <iomanip>
#include <iostream>
#include <string>

std::array<std::uint_fast32_t, 256> generate_crc_lookup_table() noexcept
{
    auto const reversed_polynomial = std::uint_fast32_t{0xEDB88320uL};
    
    // This is the function object that calculates the checksum for a value,
    // then increments the value starting from zero
    struct byte_checksum
    {
        std::uint_fast32_t operator()() noexcept
        {
            auto checksum = static_cast<std::uint_fast32_t>(n++);
            
            for(auto i = 0; i < 8; ++i) {
                checksum = (checksum >> 1) ^ ((checksum & 0x1u) ? reversed_polynomial : 0);
            }
            return checksum;
        }
        unsigned n = 0;
    };
    
    auto table = std::array<std::uint_fast32_t,256>{};
    std::generate(table.begin(), table.end(), byte_checksum{});
    
    return table;
}

template <typename InputIterator>
std::uint_fast32_t crc(InputIterator first, InputIterator last)
{
    static auto const table = generate_crc_lookup_table();
    
    return std::uint_fast32_t{0xFFFFFFFFuL} & 
        ~std::accumulate(first, last)
}
