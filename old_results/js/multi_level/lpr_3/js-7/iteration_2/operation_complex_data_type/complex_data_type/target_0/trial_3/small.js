function opt() {
  const b_proxy_target = [];
  const b_proxy_handler = Proxy;
  const b_proxy_valueOf = () => {};
  const is_b_proxy_finite = isFinite(b_proxy);
  return is_b_proxy_finite;
}