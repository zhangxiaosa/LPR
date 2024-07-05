
<program>
  <function name="fn1">
    <return type="long" />
  </function>
  <function name="fn2">
    <return type="d" />
    <block>
      <variable name="c" type="long" />
      <variable name="f" type="d" />
      <expression>c = fn1</expression>
      <expression>f = {c}</expression>
      <return>f</return>
    </block>
  </function>
  <main>
    <block>
      <expression>fn2()</expression>
    </block>
  </main>
</program>
