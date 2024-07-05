const Opt = () => {
    // Define function a
    const a = () => {};

    // Assign value of a to b
    const b = a;

    // Create a Proxy object with b as the target
    const eTarget = b;
    const eHandler = {};

    // Set prototype property of e to undefined
    const ePrototype = undefined;

    // Destructure prototype property from b and assign it to a
    const { prototype: aPrototype } = b;

    // Return function a
    return a;
};

// Create an instance of e
const e = new Opt();