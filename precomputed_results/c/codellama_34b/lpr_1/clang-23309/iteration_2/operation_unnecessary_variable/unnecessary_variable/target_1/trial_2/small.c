
<Program>

  <ConstantPropagation>

    <Function>

      <Name>fn10</Name>

      <Parameters>

        <Parameter>

          <Name>p1</Name>

          <Type>short</Type>

        </Parameter>

        <Parameter>

          <Name>p2</Name>

          <Type>short</Type>

        </Parameter>

      </Parameters>

      <Body>

        <ForLoop>

          <Variable>

            <Name>w</Name>

            <Type>unsigned char</Type>

          </Variable>

          <Start>3</Start>

          <End>0</End>

          <Step>-1</Step>

          <Body>

            <Assignment>

              <Variable>

                <Name>an</Name>

                <Type>short</Type>

              </Variable>

              <Expression>250</Expression>

            </Assignment>

            <Assignment>

              <Variable>

                <Name>p2</Name>

                <Type>short</Type>

              </Variable>

              <Expression>ac || (an = w) == 0x294A85636008822D</Expression>

            </Assignment>

            <If>

              <Condition>fn2(fn3(0xBCD1, 1 - an), p2) & 1</Condition>

              <Then>

                <Assignment>

                  <Variable>

                    <Name>v</Name>

                    <Type>unsigned</Type>

                  </Variable>

                  <Expression>1</Expression>

                </Assignment>

              </Then>

            </If>

          </Body>

        </ForLoop>

        <Return>

          <Expression>3</Expression>

        </Return>

      </Body>

    </Function>

  </ConstantPropagation>

  <Function>

    <Name>fn13</Name>

    <Body>

      <Call>

        <FunctionName>fn10</FunctionName>

        <Arguments>

          <Argument>

            <Expression>0</Expression>

          </Argument>

          <Argument>

            <Expression>0</Expression>

          </Argument>

        </Arguments>

      </Call>

      <Return>

        <Expression>1</Expression>

      </Return>

    </Body>

  </Function>

  <Function>

    <Name>main</Name>

    <Body>

      <Call>

        <FunctionName>fn13</FunctionName>

      </Call>

      <Printf>

        <FormatString>checksum = %X\n</FormatString>

        <Arguments>

          <Argument>

            <Expression>v</Expression>

          </Argument>

        </Arguments>

      </Printf>

      <Return>

        <Expression>0</Expression>

      </Return>

    </Body>

  </Function>

</Program>
