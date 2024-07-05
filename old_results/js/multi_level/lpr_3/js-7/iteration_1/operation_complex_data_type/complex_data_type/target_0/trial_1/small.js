const b_proxy = [];

const b_valueOf = () => {};

b_proxy.valueOf = b_valueOf;

const result = isFinite(b_proxy);

return result;