(new Proxy([], Proxy)).valueOf = function() {};
return isFinite(new Proxy([], Proxy));