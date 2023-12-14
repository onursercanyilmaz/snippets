import React from 'react';
import {render} from '@testing-library/react-native';
import Button from './Button';
//npm test
test('', () => {
  const component = render(<Button onPress={undefined} />);
  expect(component).toMatchSnapshot();
});
