#include <boost/math/common_factor.hpp>
#include <algorithm>
#include <iterator>


int main()
{
    using std::cout;
    using std::endl;

    cout << "The GCD and LCM of 6 and 15 are "
     << boost::math::gcd(6, 15) << " and "
     << boost::math::lcm(6, 15) << ", respectively."
     << endl;

    cout << "The GCD and LCM of 8 and 9 are "
     << boost::math::static_gcd<8, 9>::value
     << " and "
     << boost::math::static_lcm<8, 9>::value
     << ", respectively." << endl;
}
