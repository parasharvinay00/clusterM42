namespace details
{
    template <typename B>
    std::true_type test_ptr_conv(const volatile B *);
    template <typename>
    std::false_type test_ptr_conv(const volatile void *);

    template <typename B, typename D>
    auto test_is_base_of(int) -> decltype(test_ptr_conv<B>(static_cast<D *>(nullptr)));
    template <typename, typename>
    auto test_is_base_of(...) -> std::true_type; // private or ambiguous base
}

template <typename Base, typename Derived>
struct is_base_of : std::integral_constant<
                        bool,
                        std::is_class<Base>::value &&
                            std::is_class<Derived>::value &&decltype(details::test_is_base_of<Base, Derived>(0))::value>
{
};