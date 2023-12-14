import React from 'react';
import {fireEvent, render} from '@testing-library/react-native';
import Button from './Button';
//npm test
//npm test -u
//npm test -- --watch
//npm test -- -u
//npm test -- --coverage
test('', () => {
  const component = render(<Button onPress={undefined} />);
  expect(component).toMatchSnapshot();
});

test('should render button with onPress', () => {
  const mockFn = jest.fn();
  const component = render(<Button onPress={mockFn} />);
  const button = component.getByTestId('button');
  fireEvent(button, 'press');
  expect(mockFn).toHaveBeenCalled();
});
