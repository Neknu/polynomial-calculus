#pragma once

#include <vector>
#include <string>
#include <optional>

namespace lab {

/**
 * @brief Class for holding polynomials with big integer coefficients
 */
template<uint64_t modulo>
class Polynomial
{
public:
    Polynomial(const Polynomial<modulo>& that) = default;

    //explicit Polynomial(std::initializer_list<uint64_t> coefs); TODO: implement me

    Polynomial() = default;

    //Polynomial& operator=(const Polynomial<modulo>& that) TODO: implement me

    /*
     * @return the highest power of variable with non-zero coefficient
     */
    //int degree(); TODO: implement me

    //friend std::string to_string(const Polynomial<modulo>& pol); TODO: implement me

    friend std::optional<Polynomial<modulo>> from_string(std::string_view pol_str);

    //friend bool operator==(const Polynomial& left, const Polynomial& right); TODO: implement me
    //friend bool operator!=(const Polynomial& left, const Polynomial& right); TODO: implement me

    //friend Polynomial operator+(const Polynomial& left, const Polynomial& right); TODO: implement me
    //friend Polynomial operator-(const Polynomial& left, const Polynomial& right); TODO: implement me
    //friend Polynomial operator*(const Polynomial& left, const Polynomial& right); TODO: implement me
    //friend Polynomial operator*(const Polynomial& left, int right); TODO: implement me

    //template<typename OStream>
    //friend OStream& operator<<(OStream& os, const Polynomial& pol); TODO: implement me

    //template<typename IStream>
    //friend IStream& operator>>(IStream& is, const Polynomial& pol); TODO: implement me

    //friend void modify(Polynomial& pol, const BigNum& mod); TODO: change signature and implement

    //add, subtract, multiply

private:
    // Array of polynomial's coefficients
    std::vector<uint64_t> _coefs;
};

} // namespace lab

