new Proxy(a, {}).prototype = undefined;
({
    "prototype": a
} = a);
return a;