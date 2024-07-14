#include <type_traits>
#include <utility>

namespace details
{
    template <typename Base>
    std::true_type is_base_of_test_func(Base *);
    template <typename Base>
    std::false_type is_base_of_test_func(void *);
    template <typename Base, typename Derived>
    using pre_is_base_of = decltype(is_base_of_test_func<Base>(std::declval<Derived *>()));

    // with <experimental/type_traits>:
    // template <typename Base, typename Derived>
    // using pre_is_base_of2 = std::experimental::detected_or_t<std::true_type, pre_is_base_of, Base, Derived>;
    template <typename Base, typename Derived, typename = void>
    struct pre_is_base_of2 : public std::true_type
    {
    };
    // note std::void_t is a C++17 feature
    template <typename Base, typename Derived>
    struct pre_is_base_of2<Base, Derived, std::void_t<pre_is_base_of<Base, Derived>>> : public pre_is_base_of<Base, Derived>
    {
    };
};