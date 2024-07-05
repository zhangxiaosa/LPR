const b = new Proxy([], Proxy);
        b.valueOf = function() {};
        return isFinite(new Proxy([], Proxy));